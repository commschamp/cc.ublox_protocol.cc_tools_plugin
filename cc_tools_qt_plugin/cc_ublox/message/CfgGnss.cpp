// Generated by commsdsl2tools_qt v6.3.3

#include "CfgGnss.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgGnss.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_msgVer(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MsgVer;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numTrkChHw(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumTrkChHw;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numTrkChUse(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumTrkChUse;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numConfigBlocks(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumConfigBlocks;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_gnssId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::GnssId;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_resTrkCh(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::ResTrkCh;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_maxTrkCh(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MaxTrkCh;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
            return props;
        }

        struct FlagsMembers
        {
            static QVariantMap createProps_bitsLow(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::BitsLow;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "enable")
                        .asMap();
            }

            static QVariantMap createProps_sigCfgMask(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::SigCfgMask;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_reserved(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::Reserved;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .hidden()
                        .asMap();
            }
        }; // struct FlagsMembers

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(FlagsMembers::createProps_bitsLow(true))
                    .add(FlagsMembers::createProps_sigCfgMask(true))
                    .add(FlagsMembers::createProps_reserved(true))
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_gnssId(serHidden))
                .add(ElementMembers::createProps_resTrkCh(serHidden))
                .add(ElementMembers::createProps_maxTrkCh(serHidden))
                .add(ElementMembers::createProps_reserved1(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
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
    props.append(createProps_msgVer(false));
    props.append(createProps_numTrkChHw(false));
    props.append(createProps_numTrkChUse(false));
    props.append(createProps_numConfigBlocks(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class CfgGnssImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgGnss<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgGnssImpl
    >
{
public:
    CfgGnssImpl() = default;
    CfgGnssImpl(const CfgGnssImpl&) = delete;
    CfgGnssImpl(CfgGnssImpl&&) = delete;
    virtual ~CfgGnssImpl() = default;
    CfgGnssImpl& operator=(const CfgGnssImpl&) = default;
    CfgGnssImpl& operator=(CfgGnssImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgGnss::CfgGnss() : m_pImpl(new CfgGnssImpl) {}
CfgGnss::~CfgGnss() = default;

CfgGnss& CfgGnss::operator=(const CfgGnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGnss& CfgGnss::operator=(CfgGnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgGnss::MsgIdParamType CfgGnss::doGetId()
{
    return ::cc_ublox::message::CfgGnss<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgGnss::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgGnss::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgGnss::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgGnss::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGnss::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgGnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgGnss::MsgIdParamType CfgGnss::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgGnss::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgGnss::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgGnss::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgGnss::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgGnss::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
