// Generated by commsdsl2tools_qt v6.3.4

#include "CfgTmode3.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Alt.h"
#include "cc_tools_qt_plugin/cc_ublox/field/AltHP.h"
#include "cc_tools_qt_plugin/cc_ublox/field/FixedPosAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lat.h"
#include "cc_tools_qt_plugin/cc_ublox/field/LatHP.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lon.h"
#include "cc_tools_qt_plugin/cc_ublox/field/LonHP.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res8.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgTmode3.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

struct FlagsMembers
{
    static QVariantMap createProps_mode(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Mode;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Disabled", 0)
                .add("Survey In", 1)
                .add("Fixed Mode", 2)
                .asMap();
    }

    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Bits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "lla")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_mode(true))
            .add(FlagsMembers::createProps_bits(true))
            .asMap();
}

struct EcefMembers
{
    struct EcefWrapMembers
    {
        static QVariantMap createProps_ecefX(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrapMembers::EcefX;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_ecefY(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrapMembers::EcefY;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_ecefZ(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrapMembers::EcefZ;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_ecefXHP(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrapMembers::EcefXHP;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(1U)
                    .asMap();
        }

        static QVariantMap createProps_ecefYHP(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrapMembers::EcefYHP;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(1U)
                    .asMap();
        }

        static QVariantMap createProps_ecefZHP(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrapMembers::EcefZHP;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(1U)
                    .asMap();
        }
    }; // struct EcefWrapMembers

    static QVariantMap createProps_ecefWrap(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::EcefMembers::EcefWrap;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(EcefWrapMembers::createProps_ecefX(serHidden))
                .add(EcefWrapMembers::createProps_ecefY(serHidden))
                .add(EcefWrapMembers::createProps_ecefZ(serHidden))
                .add(EcefWrapMembers::createProps_ecefXHP(serHidden))
                .add(EcefWrapMembers::createProps_ecefYHP(serHidden))
                .add(EcefWrapMembers::createProps_ecefZHP(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct EcefMembers

static QVariantMap createProps_ecef(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ecef;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(EcefMembers::createProps_ecefWrap(serHidden))
            .asMap();
}

struct LlaMembers
{
    struct LlaWrapMembers
    {
        static QVariantMap createProps_lat(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrapMembers::Lat;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lat(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_lon(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrapMembers::Lon;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lon(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_alt(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrapMembers::Alt;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_alt(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_latHP(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrapMembers::LatHP;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_latHP(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_lonHP(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrapMembers::LonHP;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lonHP(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_altHP(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrapMembers::AltHP;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_altHP(Field::name(), serHidden);
            return props;
        }
    }; // struct LlaWrapMembers

    static QVariantMap createProps_llaWrap(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LlaMembers::LlaWrap;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(LlaWrapMembers::createProps_lat(serHidden))
                .add(LlaWrapMembers::createProps_lon(serHidden))
                .add(LlaWrapMembers::createProps_alt(serHidden))
                .add(LlaWrapMembers::createProps_latHP(serHidden))
                .add(LlaWrapMembers::createProps_lonHP(serHidden))
                .add(LlaWrapMembers::createProps_altHP(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct LlaMembers

static QVariantMap createProps_lla(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lla;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(LlaMembers::createProps_llaWrap(serHidden))
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_fixedPosAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixedPosAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_fixedPosAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_svinMinDur(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SvinMinDur;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svinVarLimit(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SvinVarLimit;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTmode3Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res8(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_flags(false));
    props.append(createProps_ecef(false));
    props.append(createProps_lla(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_fixedPosAcc(false));
    props.append(createProps_svinMinDur(false));
    props.append(createProps_svinVarLimit(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class CfgTmode3Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgTmode3<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgTmode3Impl
    >
{
public:
    CfgTmode3Impl() = default;
    CfgTmode3Impl(const CfgTmode3Impl&) = delete;
    CfgTmode3Impl(CfgTmode3Impl&&) = delete;
    virtual ~CfgTmode3Impl() = default;
    CfgTmode3Impl& operator=(const CfgTmode3Impl&) = default;
    CfgTmode3Impl& operator=(CfgTmode3Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTmode3::CfgTmode3() : m_pImpl(new CfgTmode3Impl) {}
CfgTmode3::~CfgTmode3() = default;

CfgTmode3& CfgTmode3::operator=(const CfgTmode3& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode3& CfgTmode3::operator=(CfgTmode3&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgTmode3::MsgIdParamType CfgTmode3::doGetId()
{
    return ::cc_ublox::message::CfgTmode3<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgTmode3::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTmode3::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTmode3::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTmode3::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode3::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode3*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTmode3::MsgIdParamType CfgTmode3::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTmode3::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTmode3::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTmode3::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTmode3::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTmode3::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
