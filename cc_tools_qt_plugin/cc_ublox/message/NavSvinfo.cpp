// Generated by commsdsl2tools_qt v6.3.4

#include "NavSvinfo.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavSvinfo.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_numCh(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumCh;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

struct GlobalFlagsMembers
{
    static QVariantMap createProps_chipGen(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GlobalFlagsMembers::ChipGen;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Antaris", 0)
                .add("u-blox 5", 1)
                .add("u-blox 6", 2)
                .add("u-blox 7", 3)
                .add("u-blox 8", 4)
                .asMap();
    }

    static QVariantMap createProps_reserved(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GlobalFlagsMembers::Reserved;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }
}; // struct GlobalFlagsMembers

static QVariantMap createProps_globalFlags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GlobalFlags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(GlobalFlagsMembers::createProps_chipGen(true))
            .add(GlobalFlagsMembers::createProps_reserved(true))
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_chn(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Chn;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_svid(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Svid;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(0U, "svUsed")
                    .add(1U, "diffCorr")
                    .add(2U, "orbitAvail")
                    .add(3U, "orbitEph")
                    .add(4U, "unhealthy")
                    .add(5U, "orbitAlm")
                    .add(6U, "orbitAop")
                    .add(7U, "smoothed")
                    .asMap();
        }

        static QVariantMap createProps_quality(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Quality;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("no signal", 0)
                    .add("searching signal", 1)
                    .add("signal acquired", 2)
                    .add("signal detected but unusable", 3)
                    .add("code locked", 4)
                    .add("code and carrier locked", 5)
                    .add("code and carrier locked", 6)
                    .add("code and carrier locked", 7)
                    .asMap();
        }

        static QVariantMap createProps_cno(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Cno;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_elev(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Elev;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_azim(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Azim;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_prRes(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PrRes;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_chn(serHidden))
                .add(ElementMembers::createProps_svid(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .add(ElementMembers::createProps_quality(serHidden))
                .add(ElementMembers::createProps_cno(serHidden))
                .add(ElementMembers::createProps_elev(serHidden))
                .add(ElementMembers::createProps_azim(serHidden))
                .add(ElementMembers::createProps_prRes(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinfoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_numCh(false));
    props.append(createProps_globalFlags(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class NavSvinfoImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavSvinfo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavSvinfoImpl
    >
{
public:
    NavSvinfoImpl() = default;
    NavSvinfoImpl(const NavSvinfoImpl&) = delete;
    NavSvinfoImpl(NavSvinfoImpl&&) = delete;
    virtual ~NavSvinfoImpl() = default;
    NavSvinfoImpl& operator=(const NavSvinfoImpl&) = default;
    NavSvinfoImpl& operator=(NavSvinfoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSvinfo::NavSvinfo() : m_pImpl(new NavSvinfoImpl) {}
NavSvinfo::~NavSvinfo() = default;

NavSvinfo& NavSvinfo::operator=(const NavSvinfo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvinfo& NavSvinfo::operator=(NavSvinfo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavSvinfo::MsgIdParamType NavSvinfo::doGetId()
{
    return ::cc_ublox::message::NavSvinfo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavSvinfo::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSvinfo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSvinfo::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSvinfo::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvinfo::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSvinfo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSvinfo::MsgIdParamType NavSvinfo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSvinfo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSvinfo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSvinfo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSvinfo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSvinfo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
