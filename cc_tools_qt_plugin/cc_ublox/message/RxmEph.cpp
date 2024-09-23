// Generated by commsdsl2tools_qt v6.3.4

#include "RxmEph.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmEph.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_how(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::How;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct SfdMembers
{
    struct ListsMembers
    {
        struct Sf1dMembers
        {
            static QVariantMap createProps_element(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::ListsMembers::Sf1dMembers::Element;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }
        }; // struct Sf1dMembers

        static QVariantMap createProps_sf1d(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::ListsMembers::Sf1d;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .serialisedHidden()
                    .add(Sf1dMembers::createProps_element(serHidden))
                    .appendIndexToElementName()
                    .asMap();
        }

        struct Sf2dMembers
        {
            static QVariantMap createProps_element(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::ListsMembers::Sf2dMembers::Element;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }
        }; // struct Sf2dMembers

        static QVariantMap createProps_sf2d(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::ListsMembers::Sf2d;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .serialisedHidden()
                    .add(Sf2dMembers::createProps_element(serHidden))
                    .appendIndexToElementName()
                    .asMap();
        }

        struct Sf3dMembers
        {
            static QVariantMap createProps_element(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::ListsMembers::Sf3dMembers::Element;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }
        }; // struct Sf3dMembers

        static QVariantMap createProps_sf3d(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::ListsMembers::Sf3d;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .serialisedHidden()
                    .add(Sf3dMembers::createProps_element(serHidden))
                    .appendIndexToElementName()
                    .asMap();
        }
    }; // struct ListsMembers

    static QVariantMap createProps_lists(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SfdMembers::Lists;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ListsMembers::createProps_sf1d(serHidden))
                .add(ListsMembers::createProps_sf2d(serHidden))
                .add(ListsMembers::createProps_sf3d(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct SfdMembers

static QVariantMap createProps_sfd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Sfd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(SfdMembers::createProps_lists(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid(false));
    props.append(createProps_how(false));
    props.append(createProps_sfd(false));
    return props;
}

} // namespace

class RxmEphImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmEphImpl
    >
{
public:
    RxmEphImpl() = default;
    RxmEphImpl(const RxmEphImpl&) = delete;
    RxmEphImpl(RxmEphImpl&&) = delete;
    virtual ~RxmEphImpl() = default;
    RxmEphImpl& operator=(const RxmEphImpl&) = default;
    RxmEphImpl& operator=(RxmEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmEph::RxmEph() : m_pImpl(new RxmEphImpl) {}
RxmEph::~RxmEph() = default;

RxmEph& RxmEph::operator=(const RxmEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmEph& RxmEph::operator=(RxmEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmEph::MsgIdParamType RxmEph::doGetId()
{
    return ::cc_ublox::message::RxmEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmEph::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmEph::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmEph::resetImpl()
{
    m_pImpl->reset();
}

bool RxmEph::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmEph::MsgIdParamType RxmEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
